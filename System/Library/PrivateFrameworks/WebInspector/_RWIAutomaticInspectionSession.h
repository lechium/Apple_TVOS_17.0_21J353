//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _RWIAutomaticInspectionSession : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_debuggers;	// 16 = 0x10
    NSNumber *_pageId;	// 24 = 0x18
    NSString *_applicationIdentifier;	// 32 = 0x20
    int _applicationPID;	// 40 = 0x28
    unsigned long long _currentDebuggerIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000234f
@property(readonly, copy, nonatomic) NSArray *debuggers; // @synthesize debuggers=_debuggers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x00000000000022d4
- (void)_sendQuery;	// IMP=0x00000000000021ee
- (_Bool)receivedRejectResponse;	// IMP=0x00000000000020da
- (void)start;	// IMP=0x0000000000001ff2
- (id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 applicationPID:(int)arg3 debuggers:(id)arg4;	// IMP=0x0000000000001e80

@end

