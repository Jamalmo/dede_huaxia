$(function(){
/*登录弹出框*/
	$(".tou_box").click(function(){
  $(".hid_box").css("display","block");
});
	$(".close").click(function(){
  $(".hid_box").css("display","none");
});
/*礼物弹出框*/
$(".gift").click(function(){
  $(".hid_box2").css("display","block");
});
	$(".close2").click(function(){
  $(".hid_box2").css("display","none");
});
	/*支付方式*/
$(".zxpx").click(function(){
  $(".hid_box3").css("display","block");
});
	$(".close3").click(function(){
  $(".hid_box3").css("display","none");
});
})