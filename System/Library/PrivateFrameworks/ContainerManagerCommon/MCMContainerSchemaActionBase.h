//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerSchemaContext, NSString;

__attribute__((visibility("hidden")))
@interface MCMContainerSchemaActionBase : NSObject
{
    MCMContainerSchemaContext *_context;	// 8 = 0x8
}

+ (void)_resolveArguments:(id)arg1 toPathArgument:(id *)arg2 context:(id)arg3;	// IMP=0x0010000000064dc8
+ (void)_resolveArguments:(id)arg1 toSourcePathArgument:(id *)arg2 destPathArgument:(id *)arg3 context:(id)arg4;	// IMP=0x0010000000064a46
+ (id)actionIdentifier;	// IMP=0x0010000000064a0e
+ (id)actionWithName:(id)arg1 arguments:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000064719
- (void).cxx_destruct;	// IMP=0x00000000000646de
@property(readonly, nonatomic) MCMContainerSchemaContext *context; // @synthesize context=_context;
- (_Bool)performWithError:(id *)arg1;	// IMP=0x0000000000064625
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 error:(id *)arg2 duringBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000643c0
- (_Bool)makedirAtURL:(id)arg1 followTerminalSymlink:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000063c29
- (_Bool)backupFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000634bf
@property(readonly, copy) NSString *description;
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000633e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

