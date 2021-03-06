//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSImmutableLayer, NSMutableArray;

@interface MSTreeDiff : NSObject
{
    MSImmutableLayer *_firstLayer;
    MSImmutableLayer *_secondLayer;
    NSMutableArray *_mutableDiffs;
    NSMutableArray *_firstLayerAncestorStack;
    NSMutableArray *_secondLayerAncestorStack;
}

@property(retain, nonatomic) NSMutableArray *secondLayerAncestorStack; // @synthesize secondLayerAncestorStack=_secondLayerAncestorStack;
@property(retain, nonatomic) NSMutableArray *firstLayerAncestorStack; // @synthesize firstLayerAncestorStack=_firstLayerAncestorStack;
@property(retain, nonatomic) NSMutableArray *mutableDiffs; // @synthesize mutableDiffs=_mutableDiffs;
@property(readonly, nonatomic) MSImmutableLayer *secondLayer; // @synthesize secondLayer=_secondLayer;
@property(readonly, nonatomic) MSImmutableLayer *firstLayer; // @synthesize firstLayer=_firstLayer;
- (void).cxx_destruct;
- (struct CGRect)overlayDirtyDiffRect;
- (struct CGRect)contentDirtyDiffRect;
- (void)addDiffPairForFirstLayer:(id)arg1 secondLayer:(id)arg2;
- (void)diffLayer:(id)arg1 withLayer:(id)arg2;
- (void)diffLayers:(id)arg1 withLayers:(id)arg2;
- (id)diffs;
- (id)init;
- (id)initWithFirstLayer:(id)arg1 secondLayer:(id)arg2;

@end

