.. -*- rst -*-

========
Segments
========

Lists, shows details for, creates, updates, and deletes segments. The
segments API is admin-only.

Show segment details
====================

.. rest_method::  GET /v2.0/segments/{segment_id}

Shows details for a segment.

You can control which response parameters are returned by using the
fields query parameter. For information, see `Filtering and column
selection <http://specs.openstack.org/openstack/neutron-
specs/specs/api/networking_general_api_information.html#filtering-
and-column-selection>`__.

Normal response codes: 200

Error response codes: 404,401

Request
-------

.. rest_parameters:: parameters.yaml

   - segment_id: segment_id-path

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: segment_id
   - network_id: network_id
   - physical_network: provider:physical_network
   - network_type: network_type
   - segmentation_id: provider:segmentation_id
   - name: name
   - description: description

Response Example
----------------

.. literalinclude:: samples/segments/segment-show-response.json
   :language: javascript

Update segment
==============

.. rest_method::  PUT /v2.0/segments/{segment_id}

Updates a segment.

Normal response codes: 200

Error response codes: 404,403,401,400

Request
-------

.. rest_parameters:: parameters.yaml

   - segment_id: segment_id-path
   - name: name-segment
   - description: description-request

Request Example
---------------

.. literalinclude:: samples/segments/segment-update-request.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: segment_id
   - network_id: network_id
   - physical_network: provider:physical_network
   - network_type: network_type
   - segmentation_id: provider:segmentation_id
   - name: name
   - description: description

Response Example
----------------

.. literalinclude:: samples/segments/segment-update-response.json
   :language: javascript

Delete segment
==============

.. rest_method::  DELETE /v2.0/segments/{segment_id}

Deletes a segment and its associated resources.

Normal response codes: 204

Error response codes: 409,404,401

Request
-------

.. rest_parameters:: parameters.yaml

   - segment_id: segment_id-path

Response
--------

There is no body content for the response of a successful DELETE request.

List segments
=============

.. rest_method::  GET /v2.0/segments

Lists segments to which the project has access.

Use the ``fields`` query parameter to filter the response. For
information, see `Filtering and Column Selection <https://wiki.open
stack.org/wiki/Neutron/APIv2-specification#Filtering_and_Column_Sel
ection>`__.

Normal response codes: 200

Error response codes: 401

Request
-------

.. rest_parameters:: parameters.yaml

   - fields: fields

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: segment_id
   - network_id: network_id
   - physical_network: provider:physical_network
   - network_type: network_type
   - segmentation_id: provider:segmentation_id
   - name: name
   - description: description

Response Example
----------------

.. literalinclude:: samples/segments/segments-list-response.json
   :language: javascript

Create segment
==============

.. rest_method::  POST /v2.0/segments

Creates a segment.

Normal response codes: 201

Error response codes: 401,400

Request
-------

.. rest_parameters:: parameters.yaml

   - network_id: network_id
   - physical_network: provider:physical_network
   - network_type: network_type
   - segmentation_id: provider:segmentation_id
   - name: name-segment
   - description: description-request

Request Example
---------------

.. literalinclude:: samples/segments/segment-create-request.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: segment_id
   - network_id: network_id
   - physical_network: provider:physical_network
   - network_type: network_type
   - segmentation_id: provider:segmentation_id
   - name: name
   - description: description

Response Example
----------------

.. literalinclude:: samples/segments/segment-create-response.json
   :language: javascript
