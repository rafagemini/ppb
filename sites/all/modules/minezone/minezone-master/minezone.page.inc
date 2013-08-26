<?php 
/**
 * Please do not commit to this project
 */

  function minezone_page() {
  	$nodos[] = 17;
  	foreach ($nodos as $row => $value):
		$node = node_load($value);
		$uid  = $node->uid;
		$user = user_load($uid);
		$output = "<strong>".$node->title."</strong><br>";
		$output .= l("ver nodo",'node/'.$node->nid)."<br><br>";
		$output .= '<table>';
		$output .= '<tr><th>Nombre</th><th>Fecha de Creacion</th><th>Comentario</th></tr>';	
		//echo $node->comment;
		$comment = comment_load($node->cid);
		dsm($comment);
		//foreach ($comment as $key => $value) {
			$output.="<tr><td>$comment->subject</td><td>$comment->created</td><td>$comment->comment_body['und'][0]['value']</td></tr>";
		//}
		$output .= '</table>';
	endforeach;
	$result = db_query('SELECT * FROM drupal.comment
						JOIN field_data_comment_body ON field_data_comment_body.entity_id = comment.cid
						WHERE comment.nid = 17;');
	dsm($result);
	foreach($result as $item) {
  		$output.= '<td>'.$item->comment_body_value.'</td>';
	}
	return $output;
  }
/*
un nodo que tenga comentarios
poner titulo del nodo
abajo del titulo poner una tabla y en cada renglon pondran los comentarios 
nombre fecha de creacion de comment cuerpo del comment 
uses boostrap para crear el diseño de la tabla
*/
/*function minezone_page() {
	$total_comentarios=0;
	$nodos[] = 17;
	$nodos[] = 18;
	$nodos[] = 19;
	$output = " ";
	foreach ($nodos as $row => $value):
		$node = node_load($value);
		$uid  = $node->uid;
		$user = user_load($uid);
		$comment = comment_load($node->comment);
		dsm($comment);
		$output .= "<strong>".$node->title."</strong><br>";
		$output .= l("Usuario $user->name",'user/'.$user->uid)."<br>";
		$output .= 'Fecha de Publicación : '.date("F j, Y, g:i a",$node->created).'</br>';
		if($node->status==1){
			$style = 'color:green';
		}else{
			$style = 'color:red';
		}
		$output .= "<span style='$style'> Status : ".$node->status."</span><br>";
		$output .= "Tipo : ". ucfirst($node->type)."<br>";
		$output .= l("ver nodo",'node/'.$node->nid)."<br><br>";
		$output .="modificar para hacer una pagina que muestre el titulo de nodo un enlace al nodo
					independiente
					tipo de nodo
					fecha cuando se creo pero con formato
					cantidad de comentarios
					si no tiene escribir sin comentarios
					si tiene un comentarios
					debe un comentario
					si tiene mas escribir 
					n comentarios
					publicado o no
					usar verde si esta publicado
					rojo si no esta
					y por ultimo nombre y enlace al usuario que creo este nodo";
		if($node->comment_count>1){
			$output.= "</br><label style='color: green;' >hay $node->comment_count comentarios</label>";
		}else if($node->comment_count==1){
			$output.= "</br><label style='color: yellow;' >hay un comentario</label>";
		}else{
			$output.= "</br><label style='color: red;' >no hay comentarios that's so sad</label>";
		}
		$output.= '</br></br></br>';
		//$concat = $user->roles[2].' '.$user->name;
	endforeach;
	

  	return $output;
}*/

/* modificar para hacer una pagina que muestre el titulo de nodo un enlace al nodo
independiente
tipo de nodo
fecha cuando se creo pero con formato
cantidad de comentarios
si no tiene escribir sin comentarios
si tiene un comentarios
debe un comentario
si tiene mas escribir 
n comentarios
publicado o no
usar verde si esta publicado
rojo si no esta
y por ultimo nombre y enlace al usuario que creo este nodo
*/


