var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/login', function(req, res, next) {
  res.render('login');
});
router.get('/datos', function(req, res, next) {
  res.render('datos');
});
router.get('/consulta', function(req, res, next) {
  res.render('consulta');
});
router.get('/registro', function(req, res, next) {
  res.render('registro');
});
module.exports = router;
