import { describe, beforeAll, test, expect } from "bun:test";

let counter = 0;

describe("this should not run", () => {
  beforeAll(() => {
    counter++;
  });
});

describe.only("only this one should run", () => {
  beforeAll(() => {
    counter++;
  });
  test("this should run", () => {
    expect(counter).toBe(1);
  });
});
