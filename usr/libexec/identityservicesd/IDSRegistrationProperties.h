//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDSRegistrationProperties : NSObject
{
    NSArray *_interesting;	// 8 = 0x8
    NSArray *_requireAll;	// 16 = 0x10
    NSArray *_lackAll;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000343375
@property(retain, nonatomic) NSArray *lackAll; // @synthesize lackAll=_lackAll;
@property(retain, nonatomic) NSArray *requireAll; // @synthesize requireAll=_requireAll;
@property(retain, nonatomic) NSArray *interesting; // @synthesize interesting=_interesting;

@end
