//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainGenericPassword
{
}

@property(copy, nonatomic) NSString *generic;
@property(copy, nonatomic) NSString *service;
@property(copy, nonatomic) NSString *account;
@property(nonatomic, getter=isNegative) _Bool negative;
@property(nonatomic, getter=isInvisible) _Bool invisible;
@property(copy, nonatomic) NSString *viewHint;
@property(nonatomic, getter=isSynchronizable) _Bool synchronizable;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *typeCode;
@property(copy, nonatomic) NSNumber *creatorCode;
@property(copy, nonatomic) NSString *comment;
@property(copy, nonatomic) NSString *itemDescription;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) NSString *accessGroup;
- (id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1;	// IMP=0x00000000000310ce
- (void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000031041

@end

