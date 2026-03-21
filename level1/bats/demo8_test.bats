#!/usr/bin/env bats

@test "demo8 program runs" {
  run ./demo8.exe <<< "1"
  [ "$status" -eq 0 ]
}
