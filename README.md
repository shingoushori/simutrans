# CUCP
Simutrans 本体改造 増解結
coupling and uncoupling of convoys project 

by shingoushori



# commits memo

## special
### name_header_extension
#### 機能
* 信号場化 : 駅名の冒頭部分に`"[信]","[留]","[操]","[引]"`があると信号場化
#### 実装箇所
* simhalt.h/cc

### Extend "Waiting For Clearance" Tooltip
#### 機能
* 車両の状態に current_entry の座標を追加
    * "Waiting For Clearance" : 停止
    * "Stucked" : 停滞中
#### 実装箇所
* vehicle/simvehicle.cc
#### 本家Forum
* [Extend "Waiting For Clearance" Tooltip](https://forum.simutrans.com/index.php/topic,18770.0.html)

## debug

