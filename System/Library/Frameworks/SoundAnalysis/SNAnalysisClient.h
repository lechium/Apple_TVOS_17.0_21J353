//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SNAnalysisClient : NSObject
{
    MISSING_TYPE *connectionToServerGenerator;	// 8 = 0x8
    MISSING_TYPE *xpcConnectionToServer;	// 24 = 0x18
    MISSING_TYPE *queue;	// 32 = 0x20
    MISSING_TYPE *pendingInvalidationHandlers;	// 40 = 0x28
}

+ (id)defaultClient;	// IMP=0x0060000000041df6
- (void).cxx_destruct;	// IMP=0x0000000000043361
- (id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000042e42
- (id)initToConnectToMachServiceWithName:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000042467
- (id)initWithConnectionGenerator:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x000000000004219c
- (id)init;	// IMP=0x0000000000042078

@end

