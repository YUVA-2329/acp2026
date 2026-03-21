#!/usr/bin/env bats

@test "demo9 program runs" {
  run ./demo9.exe <<< "1"
  [ "$status" -eq 0 ]
}
