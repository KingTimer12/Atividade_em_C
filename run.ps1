#!/usr/bin/env pwsh

param (
    [string]$command
)

& ".\build\$command.exe"