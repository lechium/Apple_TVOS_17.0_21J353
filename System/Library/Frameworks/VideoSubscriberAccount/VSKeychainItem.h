//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, VSKeychainEditingContext, VSKeychainItemKind;

__attribute__((visibility("hidden")))
@interface VSKeychainItem : NSObject
{
    _Bool _inserted;	// 8 = 0x8
    _Bool _updated;	// 9 = 0x9
    _Bool _deleted;	// 10 = 0xa
    _Bool _hasFaultForData;	// 11 = 0xb
    VSKeychainEditingContext *_editingContext;	// 16 = 0x10
    VSKeychainItemKind *_itemKind;	// 24 = 0x18
    NSMutableDictionary *_committedValues;	// 32 = 0x20
    NSMutableDictionary *_primitiveValues;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003df8c
@property(nonatomic) _Bool hasFaultForData; // @synthesize hasFaultForData=_hasFaultForData;
@property(retain, nonatomic) NSMutableDictionary *primitiveValues; // @synthesize primitiveValues=_primitiveValues;
@property(retain, nonatomic) NSMutableDictionary *committedValues; // @synthesize committedValues=_committedValues;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic, getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic, getter=isInserted) _Bool inserted; // @synthesize inserted=_inserted;
@property(readonly, copy, nonatomic) VSKeychainItemKind *itemKind; // @synthesize itemKind=_itemKind;
@property(nonatomic) __weak VSKeychainEditingContext *editingContext; // @synthesize editingContext=_editingContext;
- (id)description;	// IMP=0x000000000003dab7
@property(copy, nonatomic) NSData *data;
- (void)didAccessValueForKey:(id)arg1;	// IMP=0x000000000003d9dd
- (void)willAccessValueForKey:(id)arg1;	// IMP=0x000000000003d951
- (void)willChangeValueForKey:(id)arg1;	// IMP=0x000000000003d85e
- (id)changedValues;	// IMP=0x000000000003d522
- (id)committedValueForKey:(id)arg1;	// IMP=0x000000000003d4a8
- (id)committedValuesForKeys:(id)arg1;	// IMP=0x000000000003d42a
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003d200
- (id)primitiveValueForKey:(id)arg1;	// IMP=0x000000000003d0f8
@property(readonly, nonatomic) _Bool hasPersistentChangedValues;
@property(readonly, nonatomic) _Bool hasChanges;
- (void)_setCommittedValues:(id)arg1 registeringUndo:(_Bool)arg2;	// IMP=0x000000000003cf3f
- (id)initWithItemKind:(id)arg1 insertIntoEditingContext:(id)arg2;	// IMP=0x000000000003cc24
- (id)init;	// IMP=0x000000000003cbb5

@end

