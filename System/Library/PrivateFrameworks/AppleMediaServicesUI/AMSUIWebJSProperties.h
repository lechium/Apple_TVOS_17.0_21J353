//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebClientContext, NSDictionary;
@protocol AMSUIWebJSPropertiesDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSProperties : NSObject
{
    id <AMSUIWebJSPropertiesDelegate> _delegate;	// 8 = 0x8
    AMSUIWebClientContext *_context;	// 16 = 0x10
    NSDictionary *_lastAccountsExport;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008f313
@property(retain, nonatomic) NSDictionary *lastAccountsExport; // @synthesize lastAccountsExport=_lastAccountsExport;
@property(nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <AMSUIWebJSPropertiesDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_hexStringFromColor:(id)arg1;	// IMP=0x000000000008f1ca
- (id)_propertiesForClientInfo:(id)arg1;	// IMP=0x000000000008efe0
- (id)_processProperties;	// IMP=0x000000000008ee65
- (id)_pluginProperties;	// IMP=0x000000000008e991
- (id)_deviceProperties;	// IMP=0x000000000008e4ce
- (id)_clientOptionsProperties;	// IMP=0x000000000008e2f4
- (id)_appearancePropertiesDictionary;	// IMP=0x000000000008e169
- (id)_appearanceProperties;	// IMP=0x000000000008e044
- (id)_accountsProperties;	// IMP=0x000000000008dc4b
- (void)_lastConnectionReportDidChange:(id)arg1;	// IMP=0x000000000008db8a
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x000000000008d668
- (void)_accessibilityPropertiesDidChange:(id)arg1;	// IMP=0x000000000008d5ba
- (id)generateProperties;	// IMP=0x000000000008cf2b
- (void)dealloc;	// IMP=0x000000000008ceb6
- (id)initWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000008cd76

@end

