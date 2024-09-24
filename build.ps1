$folders = Get-ChildItem -Directory

foreach ($folder in $folders) {
    if ($folder.Name -like "questao*") {
        Set-Location $folder.FullName
        if (Test-Path .\build.ps1) {
            .\build.ps1
        } else {
            Write-Host "build.ps1 não encontrado em $($folder.FullName)"
        }
        Set-Location ..
    }
}