//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PushNotificationRegisterBlock : NSObject
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    NSString *_environmentName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000096c59
@property(copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;

@end

