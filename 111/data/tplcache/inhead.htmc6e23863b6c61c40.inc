<?php
$z[0]=Array("global","",145,167);
$z[0][4]=array();
$z[0][4]['name']="cfg_tel";
$z[1]=Array("php","\r\n  //未登录显示的head\r\n\r\n  require_once(DEDEINC.\"/memberlogin.class.php\");\r\n  \$member = new MemberLogin();\r\n  \$memberID = \$member->M_LoginID;\r\n\r\n          //登录后显示的head\r\n  if(\$memberID) {\r\n\r\n          \$a =   '<SPAN style=\"color:#fff;line-height: 28px\">会员:</SPAN><a href=\"#\" class=\"userName\" style=\"color:#fff;line-height: 28px\">'.\$memberID.'</a>'.'   <a href=\"/member/index_do.php?fmdo=login&dopost=exit#\" style=\"color:#fff;line-height: 28px\">[退出]</a>';\r\n          echo \$a;\r\n  }\r\n  else {\r\n\r\n          echo    '\r\n          <li><a title=\"登录\" rel=\"nofollow\" href=\"/member/login.php\">登录</a> </li>\r\n          <li></li>\r\n          <li><a title=\"注册\" rel=\"nofollow\" href=\"/member/index_do.php?fmdo=user&dopost=regnew\">注册</a> </li>';\r\n  }\r\n  ",240,1037);
$z[1][4]=array();
$z[2]=Array("global","",1168,1200);
$z[2][4]=array();
$z[2][4]['name']="cfg_templets_skin";
$z[3]=Array("channel","\r\n  <li><a href=\"[field:typelink/]\"><span></span><em>[field:typename/] </em></a></li>",1357,1577);
$z[3][4]=array();
$z[3][4]['type']="top";
$z[3][4]['currentstyle']="<li class='on'><a href='~typelink~'><span></span><em>~typename~</em></a></li>";
$z[4]=Array("field","",1710,1732);
$z[4][4]=array();
$z[4][4]['name']="typename";
$z[5]=Array("channel","\r\n <li><a href=\"[field:typelink/]\"> [field:typename/] </a></li>\r\n",1905,2072);
$z[5][4]=array();
$z[5][4]['type']="top";
$z[5][4]['currentstyle']="<li><a href='~typelink~'>~typename~</a></li>";
$z[6]=Array("php","\r\n  //未登录显示的head\r\n\r\n  require_once(DEDEINC.\"/memberlogin.class.php\");\r\n  \$member = new MemberLogin();\r\n  \$memberID = \$member->M_LoginID;\r\n\r\n          //登录后显示的head\r\n  if(\$memberID) {\r\n\r\n          \$a =   '<SPAN style=\"color:#fff;line-height: 28px\">会员:</SPAN><a href=\"#\" class=\"userName\" style=\"color:#fff;line-height: 28px\">'.\$memberID.'</a>'.'   <a href=\"/member/index_do.php?fmdo=login&dopost=exit#\" style=\"color:#fff;line-height: 28px\">[退出]</a>';\r\n          echo \$a;\r\n  }\r\n  else {\r\n\r\n          echo    '\r\n          <li><a title=\"登录\" rel=\"nofollow\" href=\"/member/login.php\">登录</a> </li>\r\n          <li><a title=\"注册\" rel=\"nofollow\" href=\"/member/index_do.php?fmdo=user&dopost=regnew\">注册</a> </li>';\r\n  }\r\n  ",2080,2856);
$z[6][4]=array();
$z[7]=Array("include","",2931,2966);
$z[7][4]=array();
$z[7][4]['filename']="left.htm";

?>