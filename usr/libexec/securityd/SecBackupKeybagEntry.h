//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SecBackupKeybagEntry
{
    NSData *_publickeyHash;	// 8 = 0x8
    NSData *_publickey;	// 16 = 0x10
    NSData *_musr;	// 24 = 0x18
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00400000001aa7ef
+ (id)sqlColumns;	// IMP=0x00100000001aa7e2
+ (id)sqlTable;	// IMP=0x00100000001aa7d5
+ (id);	// IMP=0x00100000001aa6ff
+ (id)fromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001aa629
+ (id)state:(id)arg1;	// IMP=0x00100000001aa4f0
- (void).cxx_destruct;	// IMP=0x00200000001aa4ae
@property(retain) NSData *musr; // @synthesize musr=_musr;
@property(retain) NSData *publickey; // @synthesize publickey=_publickey;
@property(retain) NSData *publickeyHash; // @synthesize publickeyHash=_publickeyHash;
- (id)sqlValues;	// IMP=0x00100000001aa2be
- (id)whereClauseToFindSelf;	// IMP=0x00100000001aa21d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001aa14f
- (id)initWithPublicKey:(id)arg1 publickeyHash:(id)arg2 user:(id)arg3;	// IMP=0x00100000001aa085

@end
