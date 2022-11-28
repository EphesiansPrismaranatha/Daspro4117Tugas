<?php
//pemroses data inputan form
if (isset($POST['spn'])){
$nama_lengkap = $_POST['nama_lengkap'];
$jenis_kelamin = $_POST['jenis_kelamin'];
$alamat_tinggal = $_POST['alamat_tinggal'];
$aktif_pada_sosoial_media = $_POST['aktif_pada_sosoial_media'];
$prodi = $_POST['prodi'];
$minat1= $_POST['web'];
$minat2 = $_POST['pesan'];

hasil_input = array($nama_lengkap, $jenis_kelamin, $birthday, 
$alamat_tinggal, $prodi, $aktif_pada_sosoial_media, $web, $pesan);
echo "Hasil Inputan :";
print_r($hasil_input);
}
?>