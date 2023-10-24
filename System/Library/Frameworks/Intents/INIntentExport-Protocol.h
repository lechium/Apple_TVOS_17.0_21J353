//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntentDescription, NSBundle, NSString, PBCodable;

@protocol INIntentExport <NSObject, JSExport>
+ (INIntentDescription *)intentDescription;
+ (NSString *)typeName;
@property(readonly, nonatomic) NSString *typeName;
@property(readonly, nonatomic) NSString *intentId;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *launchId;
@property(readonly, nonatomic) NSString *utteranceString;
@property(copy, nonatomic) PBCodable *backingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(NSString *)arg2;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(NSBundle *)arg2;
- (id)init;
@end

