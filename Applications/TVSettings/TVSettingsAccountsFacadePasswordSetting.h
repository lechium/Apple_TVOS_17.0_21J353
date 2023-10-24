//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSBag, AMSSyncPasswordSettingsTask, NSNumber, NSString, UIViewController;

@interface TVSettingsAccountsFacadePasswordSetting : NSObject
{
    _Bool _isUpdatingAsnPaidSetting;	// 8 = 0x8
    _Bool _isUpdatingAsnFreeSetting;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSNumber *_asnPaidSetting;	// 24 = 0x18
    unsigned long long _asnPaidSettingValue;	// 32 = 0x20
    NSNumber *_asnFreeSetting;	// 40 = 0x28
    unsigned long long _asnFreeSettingValue;	// 48 = 0x30
    AMSBag *_amsBag;	// 56 = 0x38
    UIViewController *_presentingViewController;	// 64 = 0x40
    AMSSyncPasswordSettingsTask *_syncTask;	// 72 = 0x48
}

+ (id)keyPathsForValuesAffectingAsnFreeSetting;	// IMP=0x002000000008e0b5
+ (id)keyPathsForValuesAffectingAsnPaidSetting;	// IMP=0x001000000008e059
- (void).cxx_destruct;	// IMP=0x002000000008f15f
@property(retain, nonatomic) AMSSyncPasswordSettingsTask *syncTask; // @synthesize syncTask=_syncTask;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(nonatomic) _Bool isUpdatingAsnFreeSetting; // @synthesize isUpdatingAsnFreeSetting=_isUpdatingAsnFreeSetting;
@property(readonly, nonatomic) unsigned long long asnFreeSettingValue; // @synthesize asnFreeSettingValue=_asnFreeSettingValue;
@property(readonly, nonatomic) NSNumber *asnFreeSetting; // @synthesize asnFreeSetting=_asnFreeSetting;
@property(nonatomic) _Bool isUpdatingAsnPaidSetting; // @synthesize isUpdatingAsnPaidSetting=_isUpdatingAsnPaidSetting;
@property(readonly, nonatomic) unsigned long long asnPaidSettingValue; // @synthesize asnPaidSettingValue=_asnPaidSettingValue;
@property(readonly, nonatomic) NSNumber *asnPaidSetting; // @synthesize asnPaidSetting=_asnPaidSetting;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_setPaidSettingValue:(unsigned long long)arg1 freeSettingValue:(unsigned long long)arg2;	// IMP=0x001000000008eeba
- (void)_syncPasswordPaidSetting:(unsigned long long)arg1 freeSetting:(unsigned long long)arg2;	// IMP=0x001000000008e891
- (void)_updatePaidSetting:(unsigned long long)arg1 freeSetting:(unsigned long long)arg2;	// IMP=0x001000000008e828
- (void)_refreshAccount;	// IMP=0x001000000008e69c
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x001000000008e5a9
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e405
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e231
- (void)setAsnFreeSetting:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x001000000008e1e1
- (void)setAsnPaidSetting:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x001000000008e191
- (void)setAsnFreeSetting:(id)arg1;	// IMP=0x001000000008e151
- (void)setAsnPaidSetting:(id)arg1;	// IMP=0x001000000008e111
- (void)dealloc;	// IMP=0x001000000008dfd6
- (id)initWithAccount:(id)arg1 amsBag:(id)arg2;	// IMP=0x001000000008deb7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

