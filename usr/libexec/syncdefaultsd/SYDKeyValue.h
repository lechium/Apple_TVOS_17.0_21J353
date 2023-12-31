//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, NSData, NSDate, NSString, _TtC13syncdefaultsd8SYDKeyID;

@interface SYDKeyValue : NSObject
{
    _Bool _isNewKeyValue;	// 8 = 0x8
    _TtC13syncdefaultsd8SYDKeyID *_keyID;	// 16 = 0x10
    id _value;	// 24 = 0x18
    NSDate *_valueModificationDate;	// 32 = 0x20
    NSData *_serverSystemFieldsRecordData;	// 40 = 0x28
    NSString *;	// 48 = 0x30
}

+ (id)recordFieldKeyForValueModificationDateInStoreType:(long long)arg1;	// IMP=0x004000000000af7e
+ (_Bool)keyValueRecordHasAssetWithoutFile:(id)arg1;	// IMP=0x001000000000aece
+ (void)deleteFilesForAssetsInKeyValueRecord:(id)arg1;	// IMP=0x001000000000aac6
+ (id)recordNameForUnencryptedKey:(id)arg1;	// IMP=0x001000000000aa6c
+ (id)keyFromUnencryptedKeyValueRecordName:(id)arg1;	// IMP=0x001000000000a9e3
+ (id)keyFromKeyValueRecord:(id)arg1;	// IMP=0x001000000000a843
- (void).cxx_destruct;	// IMP=0x002000000000b025
@property(nonatomic) _Bool isNewKeyValue; // @synthesize isNewKeyValue=_isNewKeyValue;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(retain, nonatomic) NSData *serverSystemFieldsRecordData; // @synthesize serverSystemFieldsRecordData=_serverSystemFieldsRecordData;
@property(retain, nonatomic) NSDate *valueModificationDate; // @synthesize valueModificationDate=_valueModificationDate;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) _TtC13syncdefaultsd8SYDKeyID *keyID; // @synthesize keyID=_keyID;
- (id)recordRepresentationForStoreType:(long long)arg1;	// IMP=0x001000000000a198
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x00100000000097f4
- (_Bool)setServerSystemFieldsRecordIfNewer:(id)arg1;	// IMP=0x00100000000093b1
@property(readonly, nonatomic) CKRecordID *recordID;
@property(copy, nonatomic) CKRecord *serverSystemFieldsRecord;
- (void)markForDeletion;	// IMP=0x0010000000009055
- (void)setValue:(id)arg1 withModificationDate:(id)arg2;	// IMP=0x0010000000008ff4
@property(readonly, nonatomic) NSString *storeIdentifier;
@property(readonly, nonatomic) NSString *key;
- (id)redactedDescription;	// IMP=0x0010000000008d7a
- (id)description;	// IMP=0x0010000000008c41
- (id)initWithKey:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x0010000000008a50

@end

