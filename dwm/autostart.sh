#!/bin/bash

function run {
 if ! pgrep $1 ;
  then
    $@&
  fi
}
picom -b  --config ~/.config/arco-dwm/picom.conf &
run slstatus &
sxhkd -c ~/.config/arco-dwm/sxhkd/sxhkdrc &
run "nitrogen --restore"
