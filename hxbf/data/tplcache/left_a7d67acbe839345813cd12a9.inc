<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><div class="float">
        <div class="float_left">
          <a class="close4"></a>
          <a id="zxzx"></a>
          <a id="zxkf"></a>
          <a id="ewm"></a>
           <a href="#"></a>
        </div>
        <div class="float_right"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/zxkf1.png"></div> 
	</div>
<div class="float_show2">
          <div class="zxzx_show zxzx_show2"><a href="http://wpa.qq.com/msgrd?v=3&uin=525853874&site=qq&menu=yes" class="pc" target="_blank"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/qq.png">&nbsp;&nbsp;在线咨询1</a>
           <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=1782904584&site=qq&menu=yes" class="pc"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/qq.png">&nbsp;&nbsp;在线咨询2</a>
           <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=298438649&site=qq&menu=yes" class="pc"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/qq.png">&nbsp;&nbsp;在线咨询3</a>
            <a href="mqqwpa://im/chat?chat_type=wpa&uin=525853874&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/qq.png">&nbsp;&nbsp;在线咨询1</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=1782904584&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/qq.png">&nbsp;&nbsp;在线咨询2</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=298438649&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/qq.png">&nbsp;&nbsp;在线咨询3</a>
          </div>
          <div class="zxkf_show zxzx_show">
          <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=1948523263&site=qq&menu=yes" class="pc"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/kf2.png">&nbsp;&nbsp;在线客服1</a>
            <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=166995179&site=qq&menu=yes" class="pc"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/kf2.png">&nbsp;&nbsp;在线客服2</a>
           <a target="_blank" href="http://wpa.qq.com/msgrd?v=3&uin=428584346&site=qq&menu=yes" class="pc"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/kf2.png">&nbsp;&nbsp;在线客服3</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=1948523263&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/kf2.png">&nbsp;&nbsp;在线客服1</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=166995179&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/kf2.png">&nbsp;&nbsp;在线客服2</a>
           <a href="mqqwpa://im/chat?chat_type=wpa&uin=428584346&version=1&src_type=web&web_src=oicqzone.com" class="mcss"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/kf2.png">&nbsp;&nbsp;在线客服3</a>
          </div>
          <div class="ewm_show"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/img/code.png"></div>
 </div>
	<script type="text/javascript">
$(document).ready(function(){
  $(".float_right").click(function(){
  $(".float_left").toggle();
   $(".float_right").css("display","none");
    $(".zxzx_show2,.zxkf_show,.ewm_show").css("display","none");
  });
   $(".close4").click(function(){
$(".float_right").toggle();
   $(".float_left").css("display","none");
   $(".zxzx_show2,.zxkf_show,.ewm_show").css("display","none");
   })
 $("#zxzx").click(function(){
$(".zxzx_show2").toggle();
   $(".zxkf_show,.ewm_show").css("display","none");
   })
 $("#zxkf").click(function(){
$(".zxkf_show").toggle();
   $(".zxzx_show2,.ewm_show").css("display","none");
   })
 $("#ewm").click(function(){
$(".ewm_show").toggle();
   $(".zxzx_show2,.zxkf_show").css("display","none");
   })
});
</script>