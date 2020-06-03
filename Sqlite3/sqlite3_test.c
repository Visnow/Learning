#include "sqlite3_test.h"

/*
* 实现简单的数据库操作：增、删、改、查
*/

#define PATH "sqlite3_test.db"

int insertSqlite(sqlite3* db) {

    int res;
    char *sql;
    char* errmsg;

    int id;
    char name[1024];
    int score;

    printf("insert name: ");
    scanf("%s", name);
    getchar();

    printf("inset id: ");
    scanf("%d", &id);
    getchar();

    printf("inset score: ");
    scanf("%d", &score);
    getchar();

    sprintf(sql, "insert into stu values('%s', %d, %d)", name, id, score);
    res = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
    if (SQLITE_OK != res) {
        printf("%s\n", errmsg);
        printf("sqlite_exec failed !\n");
        return -1;
    } else {
        printf("sqlite_exec insert seccuss !\n");
    }

    return 0;
}

int deleteSqlite(sqlite3* db) {

    int   res;
    char *sql;
    char *errmsg;
    
    res = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
    if (SQLITE_OK != res) {
        printf("%s\n", errmsg);
        printf("sqlite_exec failed !\n");
        return -1;
    }  else {
        printf("sqlite_exec delete seccuss !\n");
    }

    return 0;
}

int updateSqlite(sqlite3* db) {

    int res;
    char *sql;
    char* errmsg;
    
    res = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
    if (SQLITE_OK != res) {
        printf("%s\n", errmsg);
        printf("sqlite_exec failed !\n");
        return -1;
    } else {
        printf("sqlite_exec update seccuss !\n");
    }
    return 0;
}

int querySqlite(sqlite3* db) {
    
    int res;
    char *sql;
    char* errmsg;
    
    res = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
    if (SQLITE_OK != res) {
        printf("%s\n", errmsg);
        printf("sqlite_exec failed !\n");
        return -1;
    } else {
        printf("sqlite_exec query seccuss !\n");
    }
    return 0;
}

int quitSqlite(sqlite3* db) {

    int res;
    
    res = sqlite3_close(db);
    if (SQLITE_OK != res) {
        printf("%s\n", sqlite3_errmsg(db));
        printf("sqlite_close failed !\n");
        return -1;
    } else {
        printf("sqlite_exec close sqlite seccuss !\n");
    }
    exit(0);
    return 0;
}

int main() {

    sqlite3* db;
    int insert;
    char* errmsg;
    int id;
    char* name;
    int score;
    
    int res = sqlite3_open(PATH, &db);
    if (SQLITE_OK != res) {
        printf("Open sqlite failed !\n");
        printf("%s\n", sqlite3_errmsg(db));
    } else {
        printf("Open sqlite seccuss !\n");
    }

    res = sqlite3_exec(db, "create table if not exists stu (name char, id Integer, score Integer);", NULL, NULL, &errmsg);
    if (SQLITE_OK != res) {
        printf("sqlite_exec create failed !\n");
        printf("%s\n", errmsg);
    } else {
        printf("sqlite_exec create seccuss !\n");
    }

    while(1) {
        printf("*************************************************************************\n");
        printf("1: insert\t 2: delete\t 3: update\t 4: check\t 5: quit\n");
        printf("*************************************************************************\n");
        scanf("%d", &insert);
        //getchar();

        switch (insert) {
            case 1:
                insertSqlite(db);
                break;
            case 2:
               // deleteSqlite(db);
                break;
            case 3:
                //updateSqlite(db);
                break;
            case 4:
               // querySqlite(db);
                break;
            case 5:
                quitSqlite(db);
                break;
            default:
                printf("You do nothing !\n");
                break;
        }
    }

    return 0;
}