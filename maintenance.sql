--------------------------------------------------------
--  File created - Friday-April-03-2020   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table MAINTENANCE
--------------------------------------------------------

  CREATE TABLE "THOURAYA"."MAINTENANCE" 
   (	"ID_MAT" NUMBER(8,0), 
	"TYPEPAN" VARCHAR2(20 BYTE), 
	"AGENTMAINT" VARCHAR2(20 BYTE), 
	"DPRISEENCHARGE" DATE, 
	"NOTE" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into THOURAYA.MAINTENANCE
SET DEFINE OFF;
Insert into THOURAYA.MAINTENANCE (ID_MAT,TYPEPAN,AGENTMAINT,DPRISEENCHARGE,NOTE) values (14,null,null,to_date('01-JAN-00','DD-MON-RR'),null);
--------------------------------------------------------
--  Constraints for Table MAINTENANCE
--------------------------------------------------------

  ALTER TABLE "THOURAYA"."MAINTENANCE" MODIFY ("ID_MAT" NOT NULL ENABLE);
--------------------------------------------------------
--  Ref Constraints for Table MAINTENANCE
--------------------------------------------------------

  ALTER TABLE "THOURAYA"."MAINTENANCE" ADD CONSTRAINT "ID_CONST" FOREIGN KEY ("ID_MAT")
	  REFERENCES "THOURAYA"."MATERIEL" ("ID") ENABLE;
