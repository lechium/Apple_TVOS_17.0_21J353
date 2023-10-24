//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (XREngineeringValueHelpers)
+ (_Bool)xr_object:(id)arg1 isEqual:(id)arg2;	// IMP=0x0080000000017b1d
- (_Bool)getTID:(unsigned long long *)arg1 process:(id *)arg2;	// IMP=0x001000000000d94e
- (_Bool)getPID:(int *)arg1 sessionUUID:(id *)arg2;	// IMP=0x001000000000d859
- (_Bool)getURLSessionName:(id *)arg1 internalSessionID:(id *)arg2 backgroundIdentifier:(id *)arg3 isShared:(_Bool *)arg4 isEphemeral:(_Bool *)arg5;	// IMP=0x001000000000d65d
- (void)enumerateTextBacktraceFrames:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d47f
- (void)enumerateKeyValuePairs:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d307
- (id)uuidFromEngineeringValue;	// IMP=0x001000000000d1d2
- (id)xr_stringArrayFromNSStringOrNSArray;	// IMP=0x0010000000017fb2
- (id)xr_clipsStringRepresentation;	// IMP=0x0010000000017c8c
- (_Bool)xr_isCLIPSSymbol;	// IMP=0x0010000000017b3e
- (int)agentStopDiagnosticsTypeCode;	// IMP=0x0010000000022875
@end

