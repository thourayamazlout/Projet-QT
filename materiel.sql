--------------------------------------------------------
--  File created - Friday-April-03-2020   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table MATERIEL
--------------------------------------------------------

  CREATE TABLE "THOURAYA"."MATERIEL" 
   (	"ID" NUMBER, 
	"TYPE" VARCHAR2(20 BYTE), 
	"ETAT" VARCHAR2(20 BYTE), 
	"DATEACHAT" DATE, 
	"MAINT" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into THOURAYA.MATERIEL
SET DEFINE OFF;
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (1,'hi','hey',to_date('01-MAY-00','DD-MON-RR'),'hoo');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (14,'thou','happy',to_date('01-SEP-00','DD-MON-RR'),'corona');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (4,'thou','thou',to_date('01-MAY-00','DD-MON-RR'),'thou');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (5,'thou','thou',null,'oui');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (2,'hoo','scooobi ',to_date('01-APR-00','DD-MON-RR'),'doo');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (3,'jjjjjj','jjjjjj',to_date('01-FEB-00','DD-MON-RR'),'jjjjj');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (7,'rrrrr','rrrrrrr',to_date('01-MAY-00','DD-MON-RR'),'rrrrr');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (9,'kkk','k',to_date('01-FEB-00','DD-MON-RR'),'k');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (10,'bb','b',to_date('01-FEB-00','DD-MON-RR'),'b');
Insert into THOURAYA.MATERIEL (ID,TYPE,ETAT,DATEACHAT,MAINT) values (11,'hhhhhh','hh',to_date('01-MAR-00','DD-MON-RR'),'hhh');
--------------------------------------------------------
--  DDL for Index MATERIEL_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "THOURAYA"."MATERIEL_PK" ON "THOURAYA"."MATERIEL" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table MATERIEL
--------------------------------------------------------

  ALTER TABLE "THOURAYA"."MATERIEL" ADD CONSTRAINT "MATERIEL_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
 
  ALTER TABLE "THOURAYA"."MATERIEL" MODIFY ("ID" NOT NULL ENABLE);
