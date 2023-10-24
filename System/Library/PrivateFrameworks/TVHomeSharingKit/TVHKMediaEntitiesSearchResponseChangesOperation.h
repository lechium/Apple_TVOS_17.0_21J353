//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError, TVHKMediaEntitiesSearchResponse, TVHKMediaEntitiesSearchResponseChanges;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesSearchResponseChangesOperation : NSOperation
{
    TVHKMediaEntitiesSearchResponseChanges *_responseChanges;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKMediaEntitiesSearchResponse *_latestResponse;	// 24 = 0x18
    TVHKMediaEntitiesSearchResponse *_currentResponse;	// 32 = 0x20
}

+ (id)new;	// IMP=0x006000000002586d
- (void).cxx_destruct;	// IMP=0x00000000000268e9
@property(retain, nonatomic) TVHKMediaEntitiesSearchResponse *currentResponse; // @synthesize currentResponse=_currentResponse;
@property(retain, nonatomic) TVHKMediaEntitiesSearchResponse *latestResponse; // @synthesize latestResponse=_latestResponse;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaEntitiesSearchResponseChanges *responseChanges; // @synthesize responseChanges=_responseChanges;
- (void)_preloadPropertiesForMediaEntities:(id)arg1;	// IMP=0x00000000000266d4
- (void)_preloadPropertiesForResponse:(id)arg1;	// IMP=0x00000000000263e9
- (void)_preloadMediaEntityProperties;	// IMP=0x0000000000026362
- (void)main;	// IMP=0x0000000000025a13
- (id)initWithLatestResponse:(id)arg1 currentResponse:(id)arg2;	// IMP=0x000000000002590b
- (id)init;	// IMP=0x000000000002589c

@end

