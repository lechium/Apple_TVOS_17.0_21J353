//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTReplayRequest : NSObject
{
    unsigned long long _requestID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000006d88
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000006ec4
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000006e3d
- (id)initNoRequestID;	// IMP=0x0010000000006def
- (id)init;	// IMP=0x0010000000006d90

@end
