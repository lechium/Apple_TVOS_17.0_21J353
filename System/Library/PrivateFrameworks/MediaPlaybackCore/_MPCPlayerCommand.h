//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerPath, MPCPlayerResponse;

__attribute__((visibility("hidden")))
@interface _MPCPlayerCommand : NSObject
{
    MPCPlayerResponse *_response;	// 8 = 0x8
    MPCPlayerPath *_playerPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b74ab
@property(readonly, copy, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x00000000001b7424
- (id)initWithResponse:(id)arg1;	// IMP=0x00000000001b739a

@end

