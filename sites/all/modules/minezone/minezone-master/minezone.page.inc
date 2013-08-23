<?php 
/**
 * Please do not commit to this project
 */

function minezone_page() {
	$total_comentarios=0;
	$nodos[] = 17;
	$nodos[] = 18;
	$nodos[] = 19;
	$output = " ";
	foreach ($nodos as $row => $value):
		$node = node_load($value);
		$uid  = $node->uid;
		$user = user_load($uid);
		dsm($node);
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
}

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