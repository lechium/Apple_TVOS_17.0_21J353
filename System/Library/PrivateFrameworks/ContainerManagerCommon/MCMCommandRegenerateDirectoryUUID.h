//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandRegenerateDirectoryUUID
{
    MCMConcreteContainerIdentity *_concreteContainerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000b5d68
+ (unsigned long long)command;	// IMP=0x00100000000b5d32
- (void).cxx_destruct;	// IMP=0x00000000000b5cf4
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // @synthesize concreteContainerIdentity=_concreteContainerIdentity;
- (id)regenerateDirectoryUUIDNoCacheUpdateWithMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b5446
- (void)execute;	// IMP=0x00000000000b5069
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000b4fd2
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000b4f16
- (id)initWithConcreteContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;	// IMP=0x00000000000b4e71

@end

