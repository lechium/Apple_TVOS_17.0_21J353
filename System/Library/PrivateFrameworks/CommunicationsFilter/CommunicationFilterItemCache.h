//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CommunicationFilterItem;

__attribute__((visibility("hidden")))
@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem *_filterItem;	// 8 = 0x8
    long long _isInList;	// 16 = 0x10
}

@property(nonatomic) long long isInList; // @synthesize isInList=_isInList;
- (_Bool)matchesItem:(id)arg1;	// IMP=0x00000000000023ac
- (void)dealloc;	// IMP=0x0000000000002371
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;	// IMP=0x0000000000002316

@end

