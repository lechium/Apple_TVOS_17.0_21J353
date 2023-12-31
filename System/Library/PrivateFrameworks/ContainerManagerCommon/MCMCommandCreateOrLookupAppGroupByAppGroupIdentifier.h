//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity, MCMError, MCMUserIdentity, NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier
{
    _Bool _iOSStyleHandling;	// 8 = 0x8
    NSString *_appGroupIdentifier;	// 16 = 0x10
    MCMUserIdentity *_userIdentity;	// 24 = 0x18
    MCMContainerIdentity *_containerIdentity;	// 32 = 0x20
    MCMError *_error;	// 40 = 0x28
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000730d4
+ (unsigned long long)command;	// IMP=0x001000000007309e
- (void).cxx_destruct;	// IMP=0x0000000000073028
@property(readonly, nonatomic) MCMError *error; // @synthesize error=_error;
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) _Bool iOSStyleHandling; // @synthesize iOSStyleHandling=_iOSStyleHandling;
@property(readonly, nonatomic) NSString *appGroupIdentifier; // @synthesize appGroupIdentifier=_appGroupIdentifier;
- (void)execute;	// IMP=0x0000000000072640
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000072485
- (void)_commonInit:(id)arg1;	// IMP=0x0000000000072264
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000072179

@end

