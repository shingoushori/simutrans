# DCOP
Simutrans 本体改造
drastic comment-out project
内部実装の理解を目的に、劇的にコメントアウトしまくるプロジェクト

by shingoushori


# commits memo

## special
### 追い越し自由化
#### 機能
* 自由に追い越し
#### 実装箇所
* [simconvoi.cc convoi_t::can_overtake](https://github.com/shingoushori/simutrans/commit/be311b7cd374b44f629997422084eb4f5994b921）

### 交差点進入自由化
#### 機能
* 交差点への進入時に止まらなくなる
#### 実装箇所
* [vehicle/simvehicle.cc vehicle_base_t::no_cars_blocking](https://github.com/shingoushori/simutrans/commit/8678e2c3000915815f66efaaf65dc7f5e898063f）

### "段差の2マス分までの制限"の無視
#### 機能
* "段差の2マス分までの制限"を無視してスロープを作れる
#### 実装箇所
* [simtool.cc tool_setslope_t::tool_set_slope_work return "Maximum tile height difference reached.";](https://github.com/shingoushori/simutrans/commit/bd756fe3952eb90a1f6d6a18a3eb767a2b1bc7e3）

### 直進でないところに無理やり駅を建設
#### 機能
* 直進でないところに無理やり駅を建設
#### 実装箇所
* [simtool.cc tool_build_station_t::tool_station_aux not straight: sorry cannot build here ...](https://github.com/aburch/simutrans/commit/eef715588781b96cf06907e7fd8edaacb5cef65f）
#### デモ動画
* [\[Simutrans\] Demonstration of Forcibly build station on not straight way](https://www.youtube.com/watch?v=uLs0fd9Fnb4&t=5s）

## debug

