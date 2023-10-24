//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebMediaAction
{
    NSArray *_bundleIdentifiers;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    NSString *_clientVersion;	// 24 = 0x18
    NSArray *_itemIdentifiers;	// 32 = 0x20
    NSArray *_includedResultKeys;	// 40 = 0x28
    long long _type;	// 48 = 0x30
    NSString *_urlString;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000092e4e
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *includedResultKeys; // @synthesize includedResultKeys=_includedResultKeys;
@property(retain, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
- (id)_runMediaRequestWithType:(long long)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3;	// IMP=0x0000000000092a51
- (id)_runMediaRequestWithURL:(id)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3;	// IMP=0x00000000000925e4
- (id)runAction;	// IMP=0x0000000000092306
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000091f87

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

