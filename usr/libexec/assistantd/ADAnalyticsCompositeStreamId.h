//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAnalyticsCompositeStreamId : NSObject
{
    NSString *_streamUID;	// 8 = 0x8
    NSString *_speechId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000122ae8
@property(retain, nonatomic) NSString *speechId; // @synthesize speechId=_speechId;
@property(retain, nonatomic) NSString *streamUID; // @synthesize streamUID=_streamUID;

@end

