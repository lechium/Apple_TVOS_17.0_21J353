//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class REScriptToken;

@protocol RETokenBuffer <NSObject>
@property(readonly, nonatomic) REScriptToken *currentToken;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)next;
@end

