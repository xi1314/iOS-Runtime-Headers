/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaCompoundPredicate : MPMediaPredicate  {
    NSArray *_predicates;
}

@property(readonly) NSArray * predicates;

+ (id)predicateMatchingPredicates:(id)arg1;

- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPredicates:(id)arg1;
- (id)predicates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end