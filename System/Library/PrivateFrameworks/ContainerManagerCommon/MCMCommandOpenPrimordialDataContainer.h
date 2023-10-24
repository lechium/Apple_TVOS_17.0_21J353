//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity, MCMError;

__attribute__((visibility("hidden")))
@interface MCMCommandOpenPrimordialDataContainer
{
    _Bool _testMode;	// 8 = 0x8
    _Bool _extension;	// 9 = 0x9
    MCMContainerIdentity *_containerIdentity;	// 16 = 0x10
    MCMError *_error;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x0060000000067a67
+ (unsigned long long)command;	// IMP=0x0060000000067a31
- (void).cxx_destruct;	// IMP=0x00000000000679dd
@property(readonly, nonatomic) _Bool extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(readonly, nonatomic) MCMError *error; // @synthesize error=_error;
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;	// IMP=0x00000000000670a1
- (_Bool)preflightClientAllowed;	// IMP=0x000000000006706e
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000066af6

@end

