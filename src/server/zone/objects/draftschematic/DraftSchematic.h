/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/draftschematic/DraftSchematic.h generated by Engine3 IDL compiler 0.51
 */

#ifndef DRAFTSCHEMATIC_H_
#define DRAFTSCHEMATIC_H_

#include "engine/orb/ObjectRequestBroker.h"

class SceneObject;

class Player;

class DraftSchematicIngredient;

class DraftSchematicExpPropGroup;

class ObjectControllerMessage;

class DraftSchematic : public ORBObjectStub {
protected:
	DraftSchematic();
	DraftSchematic(ORBObjectServant* obj);
	DraftSchematic(DraftSchematic& ref);

	virtual ~DraftSchematic();

public:
	DraftSchematic* clone();

	DraftSchematic* dsClone(DraftSchematic* ds);

	void addIngredient(const string& ingredientTemplateName, const string& ingredientTitleName, bool optional, const string& resourceType, unsigned int resourceQuantity);

	void sendIngredientsToPlayer(Player* player);

	void helperSendIngredientsToPlayer(ObjectControllerMessage* objMsg);

	void addExperimentalProperty(unsigned int groupNumber, const string& experimentalProperty, unsigned int weight);

	void sendExperimentalPropertiesToPlayer(Player* player);

	DraftSchematicIngredient* getIngredient(int index);

	int getIngredientListSize();

	void addExpPropTitle(const string& title);

	int getExpPropTitlesListSize();

	string& getExpPropTitle(int index);

	int getExpPropGroupListSize();

	DraftSchematicExpPropGroup* getExpPropGroup(int index);

	void setPersistent(bool status);

	void setObjectID(unsigned long long objID);

	void setTanoAttributes(string& attributes);

	unsigned int getSchematicID();

	unsigned int getSchematicCRC();

	string& getName();

	string& getGroupName();

	unsigned int getComplexity();

	unsigned int getSchematicSize();

	unsigned int getObjectID();

	string& getTanoAttributes();

protected:
	string _return_getExpPropTitle;

	string _return_getGroupName;

	string _return_getName;

	string _return_getTanoAttributes;


	friend class DraftSchematicHelper;
};

class DraftSchematicImplementation;

class DraftSchematicAdapter : public ORBObjectAdapter {
public:
	DraftSchematicAdapter(DraftSchematicImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, ORBMethodInvocation* inv);

	DraftSchematic* dsClone(DraftSchematic* ds);

	void addIngredient(const string& ingredientTemplateName, const string& ingredientTitleName, bool optional, const string& resourceType, unsigned int resourceQuantity);

	void sendIngredientsToPlayer(Player* player);

	void helperSendIngredientsToPlayer(ObjectControllerMessage* objMsg);

	void addExperimentalProperty(unsigned int groupNumber, const string& experimentalProperty, unsigned int weight);

	void sendExperimentalPropertiesToPlayer(Player* player);

	DraftSchematicIngredient* getIngredient(int index);

	int getIngredientListSize();

	void addExpPropTitle(const string& title);

	int getExpPropTitlesListSize();

	string& getExpPropTitle(int index);

	int getExpPropGroupListSize();

	DraftSchematicExpPropGroup* getExpPropGroup(int index);

	void setPersistent(bool status);

	void setObjectID(unsigned long long objID);

	void setTanoAttributes(string& attributes);

	unsigned int getSchematicID();

	unsigned int getSchematicCRC();

	string& getName();

	string& getGroupName();

	unsigned int getComplexity();

	unsigned int getSchematicSize();

	unsigned int getObjectID();

	string& getTanoAttributes();

protected:
	string _param0_addIngredient__string_string_bool_string_int_;
	string _param1_addIngredient__string_string_bool_string_int_;
	string _param3_addIngredient__string_string_bool_string_int_;
	string _param1_addExperimentalProperty__int_string_int_;
	string _param0_addExpPropTitle__string_;
	string _param0_setTanoAttributes__string_;
};

class DraftSchematicHelper : public ORBClassHelper, public Singleton<DraftSchematicHelper> {
public:
	DraftSchematicHelper();

	void finalizeHelper();

	ORBObject* instantiateObject();

	ORBObjectAdapter* createAdapter(ORBObjectServant* obj);

	friend class SingletonWrapper<DraftSchematicHelper>;
};

class DraftSchematicServant : public ORBObjectServant {
public:
	DraftSchematic* _this;

public:
	DraftSchematicServant();
	virtual ~DraftSchematicServant();

	void _setStub(ORBObjectStub* stub);
	ORBObjectStub* _getStub();

};

#endif /*DRAFTSCHEMATIC_H_*/
