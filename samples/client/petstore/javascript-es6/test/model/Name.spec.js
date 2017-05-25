/**
 * Swagger Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.SwaggerPetstore);
  }
}(this, function(expect, SwaggerPetstore) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new SwaggerPetstore.Name();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('Name', function() {
    it('should create an instance of Name', function() {
      // uncomment below and update the code to test Name
      //var instane = new SwaggerPetstore.Name();
      //expect(instance).to.be.a(SwaggerPetstore.Name);
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new SwaggerPetstore.Name();
      //expect(instance).to.be();
    });

    it('should have the property snakeCase (base name: "snake_case")', function() {
      // uncomment below and update the code to test the property snakeCase
      //var instane = new SwaggerPetstore.Name();
      //expect(instance).to.be();
    });

    it('should have the property property (base name: "property")', function() {
      // uncomment below and update the code to test the property property
      //var instane = new SwaggerPetstore.Name();
      //expect(instance).to.be();
    });

    it('should have the property _123Number (base name: "123Number")', function() {
      // uncomment below and update the code to test the property _123Number
      //var instane = new SwaggerPetstore.Name();
      //expect(instance).to.be();
    });

  });

}));