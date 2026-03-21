#!/usr/bin/env bats

@test "demo7 program runs" {
  run ./demo7.exe <<< "1"
  [ "$status" -eq 0 ]
}
