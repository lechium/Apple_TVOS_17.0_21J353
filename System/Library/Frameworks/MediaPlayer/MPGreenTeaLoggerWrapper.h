//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3GreenTeaLogger;

__attribute__((visibility("hidden")))
@interface MPGreenTeaLoggerWrapper : NSObject
{
    ML3GreenTeaLogger *_logger;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e2cfa
- (void)endLogAccessInterval;	// IMP=0x00000000001e2ce4
- (void)beginLogAccessInterval;	// IMP=0x00000000001e2cce
- (void)logAccess;	// IMP=0x00000000001e2cb8
- (id)initWithAccessorName:(id)arg1;	// IMP=0x00000000001e2c36

@end
