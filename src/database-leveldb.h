///*
//Minetest
//Copyright (C) 2013 celeron55, Perttu Ahola <celeron55@gmail.com>
//
//This program is free software; you can redistribute it and/or modify
//it under the terms of the GNU Lesser General Public License as published by
//the Free Software Foundation; either version 2.1 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU Lesser General Public License for more details.
//
//You should have received a copy of the GNU Lesser General Public License along
//with this program; if not, write to the Free Software Foundation, Inc.,
//51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//*/
//
//#ifndef DATABASE_LEVELDB_HEADER
//#define DATABASE_LEVELDB_HEADER
//
//#include "config.h"
//
//#if USE_LEVELDB
//
//#include "database.h"
//#include "leveldb/db.h"
//#include <string>
//
//class ServerMap;
//
//class Database_LevelDB : public Database
//{
//public:
//	Database_LevelDB(ServerMap *map, std::string savedir);
//	virtual void beginSave();
//	virtual void endSave();
//	virtual bool saveBlock(v3s16 blockpos, std::string &data);
//	virtual std::string loadBlock(v3s16 blockpos);
//	virtual void listAllLoadableBlocks(std::list<v3s16> &dst);
//	virtual int Initialized(void);
//	~Database_LevelDB();
//private:
//	ServerMap *srvmap;
//	leveldb::DB* m_database;
//};
//#endif
//#endif
