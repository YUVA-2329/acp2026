#!/usr/bin/env bats

@test "demo3 program runs" {
  run ./demo3.exe <<< "1"
  [ "$status" -eq 0 ]
}
