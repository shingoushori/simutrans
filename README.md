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

### EXTEND TOOL_CHANGE_GAME_SPEED, LOGARITHMIC CONTROL 
#### 機能
* ゲームスピードを対数スケールで調整
    * menuconf.tab を次のように書き換え
```
			// # toolbar[0][31]=simple_tool[7],,.,+1
			// # toolbar[0][32]=simple_tool[7],,COMMA,-1
			// toolbar[0][31]=simple_tool[7],,.,^+1
			// toolbar[0][32]=simple_tool[7],,COMMA,^-1
```
#### 実装箇所
* simtool.h
* simworld.cc
* simworld.h
#### 本家Forum
* [EXTEND TOOL_CHANGE_GAME_SPEED, LOGARITHMIC CONTROL](https://forum.simutrans.com/index.php/topic,18814.html)
#### 関連するコミット
##### [Branch:master](https://github.com/shingoushori/simutrans/tree/master)
* [change_time_multiplier_xt](https://github.com/shingoushori/simutrans/commit/57239dcc20519f4b011de0b0632a2b65e7067fe0)
* [minor change ... change_time_multiplier_xt ... msg -> stderr](https://github.com/shingoushori/simutrans/commit/6cb1782c60fb6c40225b0ed360ffcfb9a1c020c5)

## debug

