//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDiskUsageForContainer
{
    MCMConcreteContainerIdentity *_concreteContainerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x001000000005d42a
+ (unsigned long long)command;	// IMP=0x001000000005d3f4
- (void).cxx_destruct;	// IMP=0x000000000005cd9a
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // @synthesize concreteContainerIdentity=_concreteContainerIdentity;
- (void)execute;	// IMP=0x000000000005c660
- (_Bool)preflightClientAllowed;	// IMP=0x000000000005c5a4
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000005c4e8

@end
