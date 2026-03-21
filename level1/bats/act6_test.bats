#!/usr/bin/env bats

@test "act6 program runs" {
  run ./act6.exe <<< "1"
  [ "$status" -eq 0 ]
}
