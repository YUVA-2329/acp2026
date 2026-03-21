#!/usr/bin/env bats

@test "demo10 program runs" {
  run ./demo10.exe <<< "1"
  [ "$status" -eq 0 ]
}
