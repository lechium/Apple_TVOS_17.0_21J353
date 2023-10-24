//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSString;
@protocol GCSJSONObject;

@interface NSDictionary (GameControllerSettings)
+ (id)_gcs_serializableDictionaryForDictionaryJsonObject:(id)arg1;	// IMP=0x0010000000002bde
+ (id)_gcs_serializableDictionaryForJsonObject:(id)arg1 withValuesOfClass:(Class)arg2;	// IMP=0x00100000000028fd
+ (id)_gcs_jsonObjectForSerializableDictionary:(id)arg1;	// IMP=0x0010000000002656
- (id)_gcs_gscProfileForJSONKey:(id)arg1;	// IMP=0x0010000000002f16
- (id)_gcs_gscElementForJSONKey:(id)arg1;	// IMP=0x0010000000002ea0
- (id)_gcs_uuidForJSONKey:(id)arg1;	// IMP=0x0010000000002e2a
- (id)_gcs_dateForJSONKey:(id)arg1;	// IMP=0x0010000000002db4
- (id)_gcs_arrayForJSONKey:(id)arg1;	// IMP=0x0010000000002d54
- (id)_gcs_dictionaryForJSONKey:(id)arg1;	// IMP=0x0010000000002cf4
- (id)_gcs_numberForJSONKey:(id)arg1;	// IMP=0x0010000000002c94
- (id)_gcs_stringForJSONKey:(id)arg1;	// IMP=0x0010000000002c34
@property(readonly, nonatomic) id <GCSJSONObject> jsonObject;
- (id)initWithJSONObject:(id)arg1;	// IMP=0x001000000000212e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
